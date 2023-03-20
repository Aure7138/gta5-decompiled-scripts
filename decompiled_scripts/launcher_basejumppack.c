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
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	struct<16> Local_52 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<16> Local_68 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_84 = 0;
	var uLocal_85 = 0;
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
	var uLocal_117 = 1;
	var uLocal_118 = 0;
	var uLocal_119 = 1;
	var uLocal_120 = 0;
	int iLocal_121 = 0;
	struct<3> Local_122 = { 0, 0, 0 } ;
	var uLocal_125 = 0;
	var uLocal_126 = 16;
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
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	var uLocal_290 = 0;
	var uLocal_291 = 0;
	var uLocal_292 = 0;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	bool bLocal_295 = 0;
	int iLocal_296 = 0;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
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
	bool bVar1;
	bool bVar2;
	int iVar3;
	
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
	iLocal_104 = 263;
	fLocal_116 = 4f;
	Local_89 = { ScriptParam_0.f_1[0 /*3*/] };
	Local_89 = { Local_89 };
	uLocal_85 = uLocal_85;
	Local_68 = { Local_68 };
	bVar0 = false;
	if (unk_0x8D841F1DD3FA555F(114))
	{
		func_137(1);
	}
	uLocal_84 = unk_0xE495E987CB2BE7EF(unk_0x1329891157A54C63());
	iLocal_94 = 0;
	func_135(&Global_97584, 0);
	func_129();
	unk_0x37AABDB2D9C9224A(1);
	if (func_128(uLocal_93, 1))
	{
		iLocal_99 = 10;
	}
	else
	{
		iLocal_99 = 9;
	}
	while (!Global_31303)
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	if (!func_128(uLocal_93, 8))
	{
		if (!func_126(iLocal_99))
		{
			if (func_125(0, iLocal_98))
			{
				func_137(0);
			}
			else
			{
				func_137(1);
			}
		}
	}
	if (iLocal_98 != -1)
	{
		if (!func_125(0, iLocal_98))
		{
			func_137(1);
		}
	}
	if (func_128(uLocal_93, 8388608))
	{
		func_137(1);
	}
	if (func_128(uLocal_93, 524288) && (func_124() && !func_123()))
	{
		func_137(1);
	}
	if (unk_0x968BF1C2C695B61A(unk_0xA60A6B4935A3E9A7()) > 1 && !func_128(uLocal_93, 4194304))
	{
		if (iLocal_104 != 263)
		{
			func_122(iLocal_104, 1, 0);
			iLocal_104 = 263;
		}
		func_121(10);
	}
	while (true)
	{
		if (Global_3)
		{
			func_137(1);
		}
		uLocal_84 = unk_0xE495E987CB2BE7EF(unk_0x1329891157A54C63());
		if (func_128(uLocal_93, 1048576))
		{
			if (unk_0x930F8FBB8E9537CC(uLocal_84))
			{
				func_137(1);
			}
		}
		if (unk_0x86CCCD2FAE9D5E65(iLocal_84) && !unk_0x930F8FBB8E9537CC(iLocal_84))
		{
			Local_86 = { unk_0xB6AE0DAE06D56288(iLocal_84, 1) };
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
					if (func_126(iLocal_99) || (func_128(uLocal_93, 16) && !func_128(uLocal_93, 524288)))
					{
						iLocal_97 = -1;
						func_117();
						func_121(1);
					}
					else
					{
						if (fLocal_109 > (fLocal_101 * fLocal_101))
						{
							if (iLocal_104 != 263)
							{
								func_122(iLocal_104, 1, 0);
								iLocal_104 = 263;
							}
							func_121(10);
						}
						if ((Local_86.f_2 - ScriptParam_0.f_1[0 /*3*/].f_2) > 500f)
						{
						}
					}
					break;
				
				case 1:
					if (func_115())
					{
						iLocal_102 = iLocal_102;
						func_121(3);
					}
					else
					{
						func_117();
					}
					break;
				
				case 3:
					if (unk_0x25E16CB232F8AB91())
					{
						func_137(1);
						return;
					}
					if (!func_126(iLocal_99))
					{
						if (!func_128(uLocal_93, 8))
						{
							bVar1 = true;
							if (unk_0xD994929E13CC1ED5(&(Global_90809.f_3), &Local_68))
							{
								Local_68 = { Local_52 };
								bVar1 = false;
							}
							if (bVar1)
							{
								func_137(0);
								break;
							}
						}
					}
					if (!func_128(uLocal_93, 4))
					{
						func_112();
						func_111(&uLocal_93, 4);
					}
					if (fLocal_109 > (fLocal_101 * fLocal_101) && !Global_90843)
					{
						if (iLocal_104 != 263)
						{
							if (func_110(6) && !func_109(iLocal_104))
							{
							}
							else
							{
								func_122(iLocal_104, 1, 0);
								iLocal_104 = 263;
							}
						}
						func_121(10);
					}
					else
					{
						Local_68 = { Local_52 };
						bVar2 = !func_128(uLocal_93, 64);
						func_135(&uLocal_93, 128);
						if (!func_108(3) && !Global_90843)
						{
							if (func_128(uLocal_93, 2097152))
							{
								if ((!func_128(uLocal_93, 1) || !unk_0x86CCCD2FAE9D5E65(func_107())) && !Global_90843)
								{
									func_121(10);
									break;
								}
							}
						}
						if (func_128(uLocal_93, 524288) && (func_124() && !func_123()))
						{
							func_137(1);
						}
						if (func_106())
						{
							func_137(1);
						}
						if ((!func_98(6) || Global_97978) || func_97())
						{
							bVar2 = false;
						}
						if (func_128(uLocal_93, 1))
						{
							if (!func_96())
							{
								func_94(&uLocal_93, 128);
								bVar2 = false;
							}
						}
						if (func_93(1))
						{
							bVar2 = false;
						}
						if (Global_69020)
						{
							bVar2 = false;
						}
						if (func_92())
						{
							bVar2 = false;
						}
						if (unk_0xF33755A765033580())
						{
							bVar2 = false;
						}
						if (func_91() || func_90(8, -1))
						{
							bVar2 = false;
						}
						if (!unk_0xD894621CB0A2B724(unk_0x1329891157A54C63()))
						{
							bVar2 = false;
						}
						if (!unk_0x16062BE231E411A0(unk_0x1329891157A54C63()))
						{
							bVar2 = false;
						}
						if (func_89(0) || func_88())
						{
							bVar2 = false;
						}
						if (bVar2)
						{
							if (!unk_0x515B65C19A5CA9B1(iLocal_84, ScriptParam_0.f_1[0 /*3*/], fLocal_116, fLocal_116, 2f, 0, 1, iLocal_102))
							{
								bVar2 = false;
							}
							if (!unk_0xF26CA0663D2E037E(unk_0x1329891157A54C63()))
							{
								bVar2 = false;
							}
							if (bVar2)
							{
								unk_0x89086B596828ACBE(0, 51);
								if (func_87(uLocal_85))
								{
									if (iLocal_95 == -1)
									{
										func_86(&iLocal_95, 4, sLocal_100, 0, 0, 0);
										func_94(&uLocal_93, 2048);
									}
									else if (!func_128(uLocal_93, 2048) || !unk_0xA83A609D74168B30())
									{
										func_85(&iLocal_95);
										func_135(&uLocal_93, 2048);
									}
									if (func_83(iLocal_95, 1))
									{
										sLocal_100 = sLocal_100;
										func_85(&iLocal_95);
										func_135(&uLocal_93, 2048);
										unk_0xE0013E74AB6963DC(&Local_68);
										unk_0x034205BA180B4E43(unk_0x1329891157A54C63(), 0, 56);
										func_121(5);
									}
								}
								else
								{
									sLocal_100 = sLocal_100;
									func_85(&iLocal_95);
									func_135(&uLocal_93, 2048);
									unk_0xE0013E74AB6963DC(&Local_68);
									unk_0x034205BA180B4E43(unk_0x1329891157A54C63(), 0, 56);
									func_121(5);
								}
							}
						}
						if (!bVar2)
						{
							if (iLocal_95 != -1)
							{
								func_85(&iLocal_95);
								func_135(&uLocal_93, 2048);
								unk_0xB8BB626315D394F5(0);
							}
						}
					}
					func_80();
					break;
				
				case 5:
					unk_0x89086B596828ACBE(0, 51);
					if (unk_0x06D4A1BE3DF77306(&Local_68))
					{
						if (iLocal_95 != -1)
						{
							func_85(&iLocal_95);
						}
						iVar3 = 2;
						bVar0 = false;
						if (func_128(uLocal_93, 1))
						{
							if (func_110(6) || func_110(7))
							{
								iVar3 = 1;
								bVar0 = true;
							}
						}
						if (iVar3 != 1)
						{
							iVar3 = func_77(&iLocal_97, 6, iLocal_99, 0, 0);
						}
						if (iVar3 == 1)
						{
							if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()))
							{
								unk_0x49F00D2F32CBC5B5(unk_0x1329891157A54C63());
							}
							func_76();
							if (Global_36493)
							{
								func_67(unk_0x81873881071CD9FE());
							}
							unk_0x034205BA180B4E43(unk_0x1329891157A54C63(), 1, 56);
							uLocal_51 = func_24();
							func_94(&uLocal_93, 2);
							func_121(6);
							func_20(&uLocal_106);
							if (iLocal_98 != -1)
							{
								func_19(iLocal_98);
								func_16(func_18(iLocal_98), 0, 0);
							}
						}
						else if (iVar3 == 2)
						{
							func_15();
						}
						else if (iVar3 == 0)
						{
							func_121(10);
						}
					}
					else
					{
						func_15();
					}
					break;
				
				case 6:
					if (func_128(Global_97584, 262144))
					{
						func_135(&Global_97584, 262144);
						func_14();
					}
					if (func_128(uLocal_93, 2097152))
					{
						if (!func_108(3) && !unk_0x64AD45A6264810A8(uLocal_51))
						{
							func_121(10);
						}
					}
					if (!unk_0x64AD45A6264810A8(uLocal_51))
					{
						unk_0x0B7846B087E72031(unk_0xF2DB717A73826179((func_10(&uLocal_106) * 1000f)), iLocal_98, 0);
						func_9(&uLocal_106);
						func_135(&uLocal_93, 256);
						func_8();
						if (bVar0)
						{
							func_135(&uLocal_93, 2);
						}
						else if (func_128(uLocal_93, 2))
						{
							if (func_128(Global_97584, 0))
							{
								func_7(&iLocal_97);
								iLocal_97 = -1;
								func_135(&uLocal_93, 2);
							}
							else
							{
								func_7(&iLocal_97);
								iLocal_97 = -1;
								func_135(&uLocal_93, 2);
							}
						}
						func_121(0);
						if (iLocal_98 != -1)
						{
							if (func_128(Global_97584, 0))
							{
								unk_0x27F839BD3200E49D(func_18(iLocal_98), 0, Global_90846, 0);
								func_6(func_18(iLocal_98), 0, Global_90846, 1, 0);
							}
							else
							{
								unk_0x27F839BD3200E49D(func_18(iLocal_98), 0, Global_90846, 0);
								func_6(func_18(iLocal_98), 0, Global_90846, 0, 0);
							}
						}
						func_5();
						func_135(&Global_97584, 0);
						if (func_128(uLocal_93, 16777216))
						{
							func_137(1);
						}
						if (iLocal_98 != -1)
						{
							if (Global_98931.f_7699)
							{
								if (!func_125(0, iLocal_98))
								{
									func_137(1);
								}
							}
						}
					}
					func_4();
					break;
				
				case 8:
					func_121(0);
					break;
				
				case 10:
					func_137(1);
					break;
				
				case 9:
					if (fLocal_109 > (fLocal_101 * fLocal_101))
					{
						if (iLocal_104 != 263)
						{
							func_122(iLocal_104, 1, 0);
							iLocal_104 = 263;
						}
						func_121(10);
					}
					break;
				
				case 7:
					func_2();
					if (iLocal_104 != 263)
					{
						func_122(iLocal_104, 0, 0);
					}
					if (iLocal_95 != -1)
					{
						func_85(&iLocal_95);
					}
					if (!unk_0xB318FDA0D1ABDB20(sLocal_100))
					{
						if (func_1(sLocal_100))
						{
							unk_0xB8BB626315D394F5(1);
						}
					}
					func_121(4);
					break;
				
				case 4:
					if ((iLocal_103 % 150) == 0)
					{
						if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
						{
							if (iLocal_105 == 2)
							{
								if (iLocal_105 == 2)
								{
									if (func_126(iLocal_99) && func_125(0, iLocal_98))
									{
										func_129();
										if (iLocal_104 != 263)
										{
											func_122(iLocal_104, 1, 0);
										}
										func_121(0);
									}
								}
							}
							else if (iLocal_105 == 0)
							{
								if (fLocal_109 > (fLocal_101 * fLocal_101))
								{
									if (iLocal_104 != 263)
									{
										func_122(iLocal_104, 1, 0);
										iLocal_104 = 263;
									}
									func_121(10);
								}
							}
							else if (iLocal_105 == 1)
							{
								if (fLocal_109 > ((80f + 5f) * (80f + 5f)))
								{
									func_129();
									if (iLocal_104 != 263)
									{
										func_122(iLocal_104, 1, 0);
									}
									func_121(0);
								}
							}
						}
						else
						{
							func_122(iLocal_104, 1, 0);
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
	unk_0xF7F787102FC9BCAC(sParam0);
	return unk_0xEF468B98099969A5(0);
}

void func_2()
{
	func_3(&uLocal_117);
	func_3(&uLocal_119);
	unk_0xD8323B49BAE93D80("pickup_object");
	unk_0xD8323B49BAE93D80("oddjobs@basejump@ig_15");
}

void func_3(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			unk_0x887F4488DA99FD21((*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

void func_4()
{
}

void func_5()
{
}

void func_6(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (unk_0xB318FDA0D1ABDB20(&Global_88212))
	{
		return;
	}
	if (unk_0xD6D5614CD6EF58CC(sParam0, &Global_88212, 0, -1) != 0)
	{
		return;
	}
	unk_0x9FDD3981D037FD48(sParam0, iParam1, iParam2, iParam3, iParam4, Global_85319);
	StringCopy(&Global_88212, "", 64);
}

void func_7(int iParam0)
{
	if (*iParam0 == -1)
	{
		return;
	}
	if (!*iParam0 == Global_35405)
	{
		*iParam0 = -1;
		return;
	}
	*iParam0 = -1;
	Global_35404 = 0;
	Global_35406 = 0;
	Global_35443 = 15;
	Global_55399 = 0;
	Global_55400 = 0;
}

void func_8()
{
	char cVar0[24];
	
	if (unk_0x9800AF1CCAFA4639() || unk_0x3F0C224D3CC05EF2())
	{
		unk_0x37EDB5361D2913A3(StackVal, 0, 0, 0);
	}
	else if (unk_0x211AF631627DE2C5() || unk_0xEC209B562C5EFDB2())
	{
		StringCopy(&cVar0, "PRESENCE_0_STR", 24);
		unk_0x0D8BE77DF7532733(0, &cVar0);
	}
}

void func_9(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

float func_10(var uParam0)
{
	if (func_13(uParam0))
	{
		if (func_12(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_11(unk_0x236D8AD7EE179F46(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

float func_11(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		return (unk_0xBBDA792448DB5A89(unk_0x48E480685981C7D4()) / 1000f);
	}
	if (unk_0x1C6DF6AD69BE853E())
	{
		iVar0 = unk_0xD74C7D8D2E5E43D2();
		return (unk_0xBBDA792448DB5A89(iVar0) / 1000f);
	}
	return (unk_0xBBDA792448DB5A89(unk_0x48E480685981C7D4()) / 1000f);
}

bool func_12(var uParam0)
{
	return unk_0x236D8AD7EE179F46(*uParam0, 2);
}

bool func_13(var uParam0)
{
	return unk_0x236D8AD7EE179F46(*uParam0, 1);
}

int func_14()
{
	return 1;
}

void func_15()
{
}

void func_16(char* sParam0, int iParam1, int iParam2)
{
	if (!unk_0xB318FDA0D1ABDB20(&Global_88212))
	{
		unk_0x9FDD3981D037FD48(&Global_88212, 0, 0, 0, 1, 0);
		StringCopy(&Global_88212, "", 64);
	}
	StringCopy(&Global_88212, sParam0, 64);
	unk_0xB52824C745E4ED76(sParam0, iParam1, iParam2, func_17(0));
}

bool func_17(bool bParam0)
{
	if (!bParam0 && unk_0x968BF1C2C695B61A(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x236D8AD7EE179F46(Global_69268, 0);
}

char* func_18(int iParam0)
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

void func_19(int iParam0)
{
	var uVar0;
	char cVar1[24];
	
	if (unk_0x9800AF1CCAFA4639() || unk_0x3F0C224D3CC05EF2())
	{
		uVar0 = iParam0;
		unk_0x37EDB5361D2913A3(8, &uVar0, 1, 1);
	}
	else if (unk_0x211AF631627DE2C5() || unk_0xEC209B562C5EFDB2())
	{
		StringCopy(&cVar1, "SPMG_", 24);
		StringIntConCat(&cVar1, iParam0, 24);
		StringConCat(&cVar1, "_STR", 24);
		unk_0x0D8BE77DF7532733(8, &cVar1);
	}
}

void func_20(var uParam0)
{
	if (!func_13(uParam0))
	{
		func_23(uParam0);
	}
	else
	{
		func_21(uParam0);
	}
}

void func_21(var uParam0)
{
	func_22(uParam0, 0f);
}

void func_22(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_11(unk_0x236D8AD7EE179F46(*uParam0, 4)) - fParam1);
	unk_0xF3148AAF69AF9CBC(uParam0, 1);
	unk_0xC69E84EBBD7166E6(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_23(var uParam0)
{
	if (!func_13(uParam0))
	{
		func_21(uParam0);
	}
}

int func_24()
{
	int iVar0;
	
	Global_98931.f_17581 = iLocal_121;
	switch (iLocal_121)
	{
		case 4:
		case 8:
			func_25(1);
			break;
		
		case 5:
		case 12:
		case 6:
			func_25(0);
			break;
		
		default:
			break;
	}
	if (!unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE()))
	{
		unk_0x0B895A812F665A52(unk_0x81873881071CD9FE(), 177, 1);
	}
	iVar0 = unk_0xB8BA7F44DF1575E1(&Local_52, &Local_122, 170, iLocal_96);
	unk_0xD25F9F5A80824C77(&Local_52);
	return iVar0;
}

void func_25(bool bParam0)
{
	var uVar0;
	var uVar3;
	var uVar4;
	var uVar5;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	float fVar15;
	bool bVar16;
	
	Var12 = { func_66(iLocal_121) };
	Var12 = { func_65(unk_0xD0FFB162F40A139C(Var12.f_2), unk_0x0BADBFA3B172435F(Var12.f_2), unk_0xA9ED176318016B28(Var12.f_0)) };
	unk_0x7E2FE21B0F846986(func_64(iLocal_121), Var12, 5000f, 0);
	unk_0x034205BA180B4E43(unk_0x1329891157A54C63(), 0, 256);
	unk_0xF1BC58601CA4A5C7(0);
	unk_0x3BF4F473786B0150(0);
	func_62(1);
	if (!unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE()))
	{
		unk_0x649CF94A4282A7FD(unk_0x81873881071CD9FE(), joaat("weapon_unarmed"), 1);
		unk_0x0B895A812F665A52(unk_0x81873881071CD9FE(), 177, 1);
		if (unk_0xA04824262F150982(unk_0x81873881071CD9FE()) > 0.3f)
		{
			unk_0x52A7A8711E08087B(unk_0x81873881071CD9FE(), -1);
			while (!unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE()) && unk_0xA04824262F150982(unk_0x81873881071CD9FE()) > 0.3f)
			{
				unk_0x4EDE34FBADD967A6(0);
				if (!unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE()))
				{
					unk_0x0B895A812F665A52(unk_0x81873881071CD9FE(), 177, 1);
				}
			}
		}
		if (unk_0x86CCCD2FAE9D5E65(iLocal_296))
		{
			Var6 = { unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1) - unk_0xB6AE0DAE06D56288(iLocal_296, 0) };
			Var6.f_2 = 0f;
			fVar15 = unk_0x652D2EEEF1D3E62C(Var6);
			unk_0xEAD984C2869B8B7C(&uVar3);
			if (fVar15 > 0.8f)
			{
				Var6 = { Var6 * FtoV((0.78f / fVar15)) };
				Var9 = { unk_0xB6AE0DAE06D56288(iLocal_296, 0) + Var6 };
				if (iLocal_121 == 12)
				{
					unk_0xD91194CE3D1E1D77(0, Var9, 1f, 20000, 1048576000, 0, func_61(Var9, unk_0xB6AE0DAE06D56288(iLocal_296, 0)));
				}
				else
				{
					unk_0xCEF5C750AC257B88(0, Var9, 1f, -1, func_61(Var9, unk_0xB6AE0DAE06D56288(iLocal_296, 0)), 1056964608);
				}
			}
			else if (fVar15 > 0.15f)
			{
				unk_0x5D5CFD0EDDA0BC90(0, func_61(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), unk_0xB6AE0DAE06D56288(iLocal_296, 0)), 0);
			}
			unk_0x31C1393E4ACFD794(0, "pickup_object", "pickup_low", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
			unk_0x56D9ED1541046AF6(uVar3);
			if (!unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE()))
			{
				unk_0x27CC98B7C879C320(unk_0x81873881071CD9FE());
				unk_0x0B895A812F665A52(unk_0x81873881071CD9FE(), 177, 1);
				unk_0xC65002CAA1212AF9(unk_0x81873881071CD9FE(), uVar3);
			}
			unk_0xA3561415EB3DA3A3(&uVar3);
			func_62(1);
		}
	}
	func_23(&uLocal_292);
	while ((func_10(&uLocal_292) < 6f && !unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE())) && !unk_0x0BAE7BE122182FA8(unk_0x81873881071CD9FE(), "pickup_object", "pickup_low", 3))
	{
		unk_0x0B895A812F665A52(unk_0x81873881071CD9FE(), 177, 1);
		unk_0x4EDE34FBADD967A6(0);
	}
	if (!unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE()) && unk_0x0BAE7BE122182FA8(unk_0x81873881071CD9FE(), "pickup_object", "pickup_low", 3))
	{
		unk_0xC364C8223535D51E(unk_0x81873881071CD9FE(), "pickup_object", "pickup_low", 0.8f);
		bVar16 = true;
	}
	while ((func_10(&uLocal_292) < 6f && !unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE())) && unk_0xC00796CF40447CA8(unk_0x81873881071CD9FE(), "pickup_object", "pickup_low") < 0.22f)
	{
		unk_0x0B895A812F665A52(unk_0x81873881071CD9FE(), 177, 1);
		if (!bVar16 && unk_0x0BAE7BE122182FA8(unk_0x81873881071CD9FE(), "pickup_object", "pickup_low", 3))
		{
			unk_0xC364C8223535D51E(unk_0x81873881071CD9FE(), "pickup_object", "pickup_low", 0.8f);
			bVar16 = true;
		}
		unk_0x4EDE34FBADD967A6(0);
	}
	if (!unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE()))
	{
		if (!bVar16 && unk_0x0BAE7BE122182FA8(unk_0x81873881071CD9FE(), "pickup_object", "pickup_low", 3))
		{
			unk_0xC364C8223535D51E(unk_0x81873881071CD9FE(), "pickup_object", "pickup_low", 0.7f);
			bVar16 = true;
		}
		unk_0x0B895A812F665A52(unk_0x81873881071CD9FE(), 177, 1);
	}
	func_9(&uLocal_292);
	func_40();
	if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
	{
		if (func_35() == 0)
		{
			unk_0x03F73D35E5AC583A(unk_0x81873881071CD9FE(), 9, 5, 0, 0);
		}
		else if (func_35() == 1)
		{
			unk_0x03F73D35E5AC583A(unk_0x81873881071CD9FE(), 8, 1, 0, 0);
		}
		else if (func_35() == 2)
		{
			unk_0x03F73D35E5AC583A(unk_0x81873881071CD9FE(), 8, 3, 0, 0);
		}
	}
	if (bParam0)
	{
		if (!func_33(func_34(iLocal_121)) && !unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE()))
		{
			unk_0x27CC98B7C879C320(unk_0x81873881071CD9FE());
			unk_0xD91194CE3D1E1D77(unk_0x81873881071CD9FE(), func_34(iLocal_121), 1f, -1, 1048576000, 0, 1193033728);
		}
		if (unk_0x86CCCD2FAE9D5E65(iLocal_296))
		{
			unk_0xAB6AFD52AD641D70(&iLocal_296);
		}
		uVar4 = unk_0x6112CFE839591737(26379945, func_32(iLocal_121), func_31(iLocal_121), func_30(iLocal_121), 1, 2);
		uVar5 = unk_0x6112CFE839591737(26379945, func_29(iLocal_121), func_28(iLocal_121), func_27(iLocal_121), 0, 2);
		unk_0xFEBF3DDE5E4DC5C5(1, 0, 3000, 1, 0, 0);
		unk_0xAA4B8583A269DB9C("HAND_SHAKE", 0.2f);
		func_23(&uVar0);
		while (func_10(&uVar0) < 1.5f)
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0x2CD388BEA8B3C5E8(uVar5, uVar4, func_26(iLocal_121), 1, 1);
		func_21(&uVar0);
		while (func_10(&uVar0) < ((unk_0xBBDA792448DB5A89(func_26(iLocal_121)) / 1000f) + 0.3f))
		{
			if (!unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE()))
			{
				unk_0x0B895A812F665A52(unk_0x81873881071CD9FE(), 177, 1);
			}
			unk_0x4EDE34FBADD967A6(0);
		}
	}
	else
	{
		Local_122.f_2 = iLocal_296;
	}
	if (!unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE()))
	{
		unk_0x0B895A812F665A52(unk_0x81873881071CD9FE(), 177, 1);
	}
}

int func_26(int iParam0)
{
	switch (iParam0)
	{
		case 4:
		case 8:
			return 3500;
			break;
	}
	return 0;
}

float func_27(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return 50f;
		
		case 8:
			return 50f;
		
		default:
	}
	return 60f;
}

Vector3 func_28(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return 58.4197f, 0f, -47.9402f;
		
		case 8:
			return 47.6798f, 0f, -55.2921f;
		
		default:
	}
	return 0f, 0f, 0f;
}

Vector3 func_29(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return -119.8524f, -866.9928f, 42.3211f;
		
		case 8:
			return -846.0496f, 277.5203f, 92.9133f;
		
		default:
	}
	return 0f, 0f, 0f;
}

float func_30(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return 50f;
		
		case 8:
			return 50f;
		
		default:
	}
	return 60f;
}

Vector3 func_31(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return -4.0151f, 0f, -47.5544f;
		
		case 8:
			return 2.5127f, 0f, -55.2921f;
		
		default:
	}
	return 0f, 0f, 0f;
}

Vector3 func_32(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return -119.8524f, -866.9928f, 42.3211f;
		
		case 8:
			return -846.0496f, 277.5203f, 92.9133f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_33(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

Vector3 func_34(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return -83.4741f, -835.4191f, 39.5575f;
		
		case 8:
			return -772.8513f, 312.9656f, 84.6996f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_35()
{
	func_36();
	return Global_98931.f_1750.f_539.f_3549;
}

void func_36()
{
	int iVar0;
	
	if (unk_0x86CCCD2FAE9D5E65(unk_0x81873881071CD9FE()))
	{
		if (func_39(Global_98931.f_1750.f_539.f_3549) != unk_0x14B7103DBD149FFE(unk_0x81873881071CD9FE()))
		{
			iVar0 = func_38(unk_0x81873881071CD9FE());
			if (func_37(iVar0) && (!func_110(14) || Global_97883))
			{
				if (Global_98931.f_1750.f_539.f_3549 != iVar0 && func_37(Global_98931.f_1750.f_539.f_3549))
				{
					Global_98931.f_1750.f_539.f_3550 = Global_98931.f_1750.f_539.f_3549;
				}
				Global_98931.f_1750.f_539.f_3551 = iVar0;
				Global_98931.f_1750.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_98931.f_1750.f_539.f_3549 != 145)
			{
				Global_98931.f_1750.f_539.f_3551 = Global_98931.f_1750.f_539.f_3549;
			}
			return;
		}
	}
	Global_98931.f_1750.f_539.f_3549 = 145;
}

bool func_37(int iParam0)
{
	return iParam0 < 3;
}

int func_38(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x86CCCD2FAE9D5E65(uParam0))
	{
		iVar1 = unk_0x14B7103DBD149FFE(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_39(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_39(int iParam0)
{
	if (func_37(iParam0))
	{
		return Global_98931.f_32499[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_40()
{
	struct<3> Var0;
	var uVar3;
	struct<3> Var4;
	var uVar7;
	var uVar8;
	
	if (unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
	{
		return;
	}
	unk_0x034205BA180B4E43(unk_0x1329891157A54C63(), 0, 0);
	if (unk_0x86CCCD2FAE9D5E65(iLocal_296))
	{
		unk_0xAB6AFD52AD641D70(&iLocal_296);
	}
	func_48(0, 0, 1);
	iLocal_296 = unk_0x530605DB2F32365F(joaat("p_parachute_s"), func_47(iLocal_121), 1, 1, 0);
	unk_0x3A45EB0810EBE71C(iLocal_296, func_46(iLocal_121), 2, 1);
	func_41(&Var0, &uVar3);
	Var4 = { 0f, 0f, uVar3 };
	uVar7 = unk_0x59C061A719024602(Var0, Var4, 2);
	unk_0x0F5BEB6747CF25B4(iLocal_296, uVar7, "puton_parachute_bag", "oddjobs@basejump@ig_15", 1000f, -1000f, 1, 1148846080);
	if (!unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE()))
	{
		unk_0x27CC98B7C879C320(unk_0x81873881071CD9FE());
		unk_0x58BEA8B2364F8C48(unk_0x81873881071CD9FE(), uVar7, "oddjobs@basejump@ig_15", "puton_parachute", 1000f, -1000f, 0, 0, 1148846080, 0);
	}
	unk_0x35D7948F61AA3FEC(-1, "Grab_Parachute", "BASEJUMPS_SOUNDS", 1);
	uVar8 = unk_0xAAC4D4F273757469("DEFAULT_ANIMATED_CAMERA", 0);
	unk_0xC813152833B59518(uVar8, uVar7, "puton_parachute_cam", "oddjobs@basejump@ig_15");
	unk_0xDD0B0D77CB8995B1(uVar8, 1);
	unk_0xFEBF3DDE5E4DC5C5(1, 0, 3000, 1, 0, 0);
	while (unk_0xF855C83E3A17514B(uVar7) < 0.6f)
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	unk_0x034205BA180B4E43(unk_0x1329891157A54C63(), 1, 0);
}

void func_41(var uParam0, var uParam1)
{
	*uParam0 = { func_45(iLocal_121) };
	switch (iLocal_121)
	{
		case 5:
			*uParam1 = -1.8f;
			break;
		
		case 4:
			*uParam1 = func_44(func_61(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), *uParam0), -180f, 180f);
			if (*uParam1 > 0f)
			{
				*uParam1 = func_43(*uParam1, 111.6f);
			}
			else
			{
				*uParam1 = func_42(*uParam1, -104.04f);
			}
			break;
		
		case 8:
			*uParam1 = func_44(func_61(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), *uParam0), -180f, 180f);
			if (*uParam1 > 0f)
			{
				*uParam1 = func_43(*uParam1, 79.28f);
			}
			else
			{
				*uParam1 = func_42(*uParam1, -8f);
			}
			break;
		
		case 6:
			*uParam1 = func_44(func_61(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), *uParam0), -180f, 180f);
			break;
		
		case 12:
			*uParam1 = func_44(func_61(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), *uParam0), -180f, 180f);
			break;
	}
}

float func_42(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

float func_43(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam0;
	}
	return fParam1;
}

float func_44(float fParam0, float fParam1, float fParam2)
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

Vector3 func_45(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -829.3729f, -1289.817f, 4.0005f;
		
		case 1:
			return 1208.2f, 174.3914f, 80.1245f;
		
		case 2:
			return 2463.793f, 1509.956f, 35.0349f;
		
		case 3:
			return -274.6549f, 6633.898f, 7.1166f;
		
		case 4:
			return -92.35f, -854.3f, 39.571f;
		
		case 5:
			return -120.92f, -976.05f, 295.49f;
		
		case 6:
			return -1237.2f, 4540.75f, 184.75f;
		
		case 7:
			return -742.5269f, 4493.315f, 75.1444f;
		
		case 8:
			return -801.3582f, 298.8532f, 84.949f;
		
		case 9:
			return -1367.595f, 4381.943f, 41.132f;
		
		case 10:
			return 2517.931f, 4971.752f, 44.7082f;
		
		case 11:
			return 1054.534f, -179.6562f, 70.3066f;
		
		case 12:
			return -767.415f, 4331.792f, 147.682f;
		
		default:
	}
	return 0f, 0f, 0f;
}

Vector3 func_46(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return 12f, 0f, 12.77f;
		
		case 5:
			return 10f, 0f, -134.58f;
		
		case 6:
			return 76f, 0f, -89.95f;
		
		case 8:
			return 12f, 0f, 89.56f;
		
		case 12:
			return 0f, 75f, -22f;
		
		default:
	}
	return 0f, 0f, 0f;
}

Vector3 func_47(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return -92.25f, -854.28f, 39.85f;
		
		case 5:
			return -120.92f, -976.05f, 295.49f;
		
		case 6:
			return -1237.2f, 4540.75f, 184.75f;
		
		case 8:
			return -801.57f, 298.85f, 85.25f;
		
		case 12:
			return -767.415f, 4331.792f, 147.682f;
		
		default:
	}
	return 0f, 0f, 0f;
}

void func_48(int iParam0, int iParam1, int iParam2)
{
	unk_0x034205BA180B4E43(unk_0xEC537F0C0E8265EE(), 0, iParam0);
	if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
	{
		unk_0xCE5ED63F8CA77F8B(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), 15f);
	}
	unk_0x0C64B47F8E6AF117(iParam1);
	func_59(0);
	func_50(1, 1, iParam2, 0);
	unk_0x3BF4F473786B0150(0);
	unk_0xF1BC58601CA4A5C7(0);
	func_49(23, 1);
}

void func_49(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0xF3148AAF69AF9CBC(&Global_25190, iParam0);
	}
	else
	{
		unk_0xC69E84EBBD7166E6(&Global_25190, iParam0);
	}
}

void func_50(bool bParam0, bool bParam1, var uParam2, int iParam3)
{
	if (bParam0)
	{
		unk_0xA01309A4CCECDBBE(unk_0x1329891157A54C63());
		unk_0x334B670F8C2E871D(unk_0x1329891157A54C63(), 1);
		unk_0x302581C7F63C3DAF(unk_0x1329891157A54C63(), 1);
		func_58(1);
		unk_0x314942833427CBA3();
		unk_0xDF12B8D7DEE2158B();
		if (Global_14394.f_1 > 3)
		{
			if (unk_0xE0A43912E369FFA5())
			{
				unk_0x9E95048D8C96C1EA(0);
			}
			if (!func_57())
			{
				Global_14394.f_1 = 3;
			}
			Global_15693 = 5;
		}
		func_56(1, iParam3, uParam2, 0);
		Global_55408 = 1;
		Global_67713 = 1;
		Global_69018 = 1;
	}
	else
	{
		func_58(0);
		unk_0x6246FB0D4AFA25CC();
		Global_55408 = 0;
		if (bParam1)
		{
			unk_0x5A01C8176534B756();
		}
		unk_0x334B670F8C2E871D(unk_0x1329891157A54C63(), 0);
		unk_0x302581C7F63C3DAF(unk_0x1329891157A54C63(), 0);
		func_56(0, iParam3, uParam2, 0);
		if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()) && !func_51(unk_0x1329891157A54C63()))
		{
			unk_0x210A4A0B257F8433(unk_0x81873881071CD9FE(), 0);
		}
		Global_69018 = 0;
	}
}

int func_51(int iParam0)
{
	if (func_53(iParam0, 0))
	{
		return 1;
	}
	if (func_52())
	{
		if (iParam0 == unk_0x1329891157A54C63())
		{
			return 1;
		}
	}
	if (unk_0x236D8AD7EE179F46(Global_2414506[iParam0 /*255*/].f_194, 2))
	{
		return 1;
	}
	return 0;
}

bool func_52()
{
	return unk_0x236D8AD7EE179F46(Global_2359301, 3);
}

bool func_53(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x1329891157A54C63())
	{
		bVar0 = func_54(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1585045[iParam0 /*400*/].f_192 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xA89AE5060232966A(iParam0))
		{
			bVar0 = unk_0xCCFDB2B968281FE8(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_54(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_55();
	}
	if (Global_1315870[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312723[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_55()
{
	return Global_1312729;
}

int func_56(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x913B1C01C1BA6C6F())
	{
		if (unk_0x5FB5CC66497A76D2() != iParam0 && uParam2)
		{
			unk_0xCC69602716E0A325(iParam0, uParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_57()
{
	if (Global_14394.f_1 == 1 || Global_14394.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_58(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xF3148AAF69AF9CBC(&Global_2264, 13);
	}
	else
	{
		unk_0xC69E84EBBD7166E6(&Global_2264, 13);
	}
}

void func_59(int iParam0)
{
	if (Global_14552)
	{
		func_60(0, 0);
	}
	if (Global_14394.f_1 == 10 || Global_14394.f_1 == 9)
	{
		unk_0xF3148AAF69AF9CBC(&Global_2265, 16);
	}
	if (unk_0xE0A43912E369FFA5())
	{
		unk_0x9E95048D8C96C1EA(0);
	}
	Global_15693 = 5;
	if (iParam0 == 1)
	{
		unk_0xF3148AAF69AF9CBC(&Global_2264, 30);
	}
	else
	{
		unk_0xC69E84EBBD7166E6(&Global_2264, 30);
	}
	if (!func_57())
	{
		Global_14394.f_1 = 3;
	}
}

void func_60(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_89(0))
		{
			Global_14552 = 1;
			if (bParam1)
			{
				unk_0x2B4380FBF49E1B71(&Global_14331);
			}
			Global_14322 = { Global_14340[Global_14339 /*3*/] };
			unk_0xB30AC22133A50DEE(Global_14322);
		}
	}
	else if (Global_14552 == 1)
	{
		Global_14552 = 0;
		Global_14322 = { Global_14347[Global_14339 /*3*/] };
		if (bParam1)
		{
			unk_0xB30AC22133A50DEE(Global_14331);
		}
		else
		{
			unk_0xB30AC22133A50DEE(Global_14322);
		}
	}
}

float func_61(struct<2> Param0, Vector3 vParam2, struct<2> Param3, Vector3 vParam5)
{
	return unk_0x097CA9356FED843D((Param3.f_0 - Param0.f_0), (Param3.f_1 - Param0.f_1));
}

void func_62(bool bParam0)
{
	if (bParam0)
	{
		func_63();
		if (Global_14394.f_1 == 10 || Global_14394.f_1 == 9)
		{
			unk_0xF3148AAF69AF9CBC(&Global_2265, 16);
		}
		Global_14394.f_1 = 1;
		if (func_89(0))
		{
			func_59(0);
		}
	}
	else if (Global_14394.f_1 == 1)
	{
		if (!Global_14394.f_1 == 0)
		{
			Global_14394.f_1 = 3;
		}
	}
}

void func_63()
{
	if (Global_14394.f_1 == 9 || Global_14394.f_1 == 10)
	{
		Global_15746 = 0;
		Global_15742 = 1;
	}
}

Vector3 func_64(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1143.586f, -1859.747f, 208.3878f;
		
		case 1:
			return 877.5864f, -436.3322f, 536.9036f;
		
		case 2:
			return 2041.231f, 1978.98f, 585.9358f;
		
		case 3:
			return 405.2326f, 5705.887f, 697.2318f;
		
		case 4:
			return -103.8901f, -870.8046f, 298.7574f;
		
		case 5:
			return -118.2569f, -975.1133f, 297.3781f;
		
		case 6:
			return -1237.465f, 4526.661f, 181.7929f;
		
		case 7:
			return -357.7932f, 4107.914f, 314.8059f;
		
		case 8:
			return -809.6324f, 331.3331f, 233.2818f;
		
		case 9:
			return -1286.926f, 3660.203f, 1076.051f;
		
		case 10:
			return 1022.178f, 3975.738f, 1362.533f;
		
		case 11:
			return 1608.553f, -434.5186f, 1321.916f;
		
		case 12:
			return -756.3533f, 4341.521f, 143.8134f;
		
		default:
	}
	return 0f, 0f, 0f;
}

Vector3 func_65(struct<3> Param0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = unk_0x652D2EEEF1D3E62C(Param0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		Param0 = { Param0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		Param0.f_0 = 0f;
		Param0.f_1 = 0f;
		Param0.f_2 = 0f;
	}
	return Param0;
}

Vector3 func_66(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -21.7965f, -0.0328f, 70.0438f;
		
		case 1:
			return -26.5541f, 0.0092f, -86.4416f;
		
		case 2:
			return -11.2825f, 0.0213f, 148.5283f;
		
		case 3:
			return -39.935f, 0f, 12.8174f;
		
		case 4:
			return 0.9749f, 0f, -5.2236f;
		
		case 5:
			return -12.889f, 0f, 1.6227f;
		
		case 6:
			return -48.5605f, 0f, 160.4909f;
		
		case 7:
			return -37.0509f, 0.0324f, 24.0288f;
		
		case 8:
			return -17.4118f, 0f, 117.7175f;
		
		case 9:
			return -15.4633f, 0.0328f, -5.1142f;
		
		case 10:
			return -20.9567f, 0f, 170.5743f;
		
		case 11:
			return 1.9344f, 0f, -55.2084f;
		
		case 12:
			return -46.0342f, 0f, 37.5935f;
		
		default:
	}
	return 0f, 0f, 0f;
}

void func_67(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 == 0)
	{
		return;
	}
	if (!unk_0x86CCCD2FAE9D5E65(iParam0))
	{
		return;
	}
	iVar0 = func_75(iParam0);
	if (!iVar0 == -1)
	{
		iVar1 = Global_36296[iVar0 /*5*/];
		func_70(1, iVar1, 1);
		return;
	}
	iVar2 = func_69(iParam0);
	if (iVar2 == -1)
	{
		return;
	}
	func_68(iVar2);
}

void func_68(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 5)
	{
		return;
	}
	if (!Global_36270[iParam0 /*5*/].f_1 == 0)
	{
		if (Global_36270[iParam0 /*5*/].f_1 == unk_0x81873881071CD9FE())
		{
			Global_36491 = 0;
		}
	}
	Global_36270[iParam0 /*5*/] = 13;
	Global_36270[iParam0 /*5*/].f_1 = 0;
	Global_36270[iParam0 /*5*/].f_2 = 0;
	Global_36270[iParam0 /*5*/].f_3 = 0;
	Global_36270[iParam0 /*5*/].f_4 = 0;
	Global_36269 = (Global_36269 - 1);
	if (Global_36269 < 0)
	{
		Global_36269 = 0;
	}
}

int func_69(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_36270[iVar0 /*5*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_70(int iParam0, int iParam1, int iParam2)
{
	func_71(iParam0, iParam1, iParam2, 0, 0);
}

void func_71(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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
	if (func_73(iParam0, iParam1, iParam2))
	{
		return;
	}
	iVar0 = func_72();
	if (iVar0 == -1)
	{
		return;
	}
	Global_36377[iVar0 /*5*/] = iParam0;
	Global_36377[iVar0 /*5*/].f_1 = iParam1;
	Global_36377[iVar0 /*5*/].f_2 = iParam2;
	Global_36377[iVar0 /*5*/].f_3 = iParam3;
	Global_36377[iVar0 /*5*/].f_4 = iParam4;
}

int func_72()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_36377[iVar0 /*5*/].f_2 == 6)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_73(int iParam0, int iParam1, int iParam2)
{
	if (func_74(iParam0, iParam1, iParam2) == -1)
	{
		return 0;
	}
	return 1;
}

int func_74(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam2 == Global_36377[iVar0 /*5*/].f_2)
		{
			if (iParam0 == Global_36377[iVar0 /*5*/])
			{
				if (iParam1 == Global_36377[iVar0 /*5*/].f_1)
				{
					return iVar0;
				}
			}
		}
		iVar0++;
	}
	return -1;
}

int func_75(int iParam0)
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
		if (!Global_36296[iVar0 /*5*/] == -1)
		{
			if (iParam0 == Global_36296[iVar0 /*5*/].f_1)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_76()
{
	if (Global_3069[0 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_3069[0 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_3069[1 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_3069[1 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_3069[2 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_3069[2 /*2811*/][0 /*281*/].f_259 = 0;
	}
	unk_0xC69E84EBBD7166E6(&Global_2264, 25);
	unk_0xF3148AAF69AF9CBC(&Global_2265, 11);
}

int func_77(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_88620.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_79(0))
		{
			return 0;
		}
		Global_35407++;
		*iParam0 = Global_35407;
		unk_0xE5BBA710593FB752(unk_0xEC537F0C0E8265EE(), 0);
		Global_17099.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0xEC4E76F112E5A727(8);
		}
		Global_35443 = iParam2;
		Global_35405 = *iParam0;
		Global_35406 = iParam4;
		Global_35404 = 0;
		return 1;
	}
	if (*iParam0 != -1)
	{
		if (Global_35404 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_35404)
			{
				if (Global_35410[iVar0 /*4*/] == *iParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_35405 == *iParam0)
		{
			return 1;
		}
		*iParam0 = -1;
	}
	if (*iParam0 == -1)
	{
		if (!func_126(iParam2))
		{
			return 0;
		}
		if (Global_35404 == 8)
		{
			return 0;
		}
		Global_35407++;
		*iParam0 = Global_35407;
		Global_35410[Global_35404 /*4*/] = Global_35407;
		Global_35410[Global_35404 /*4*/].f_1 = iParam1;
		Global_35410[Global_35404 /*4*/].f_2 = iParam2;
		Global_35410[Global_35404 /*4*/].f_3 = 0;
		Global_35404++;
		if (iParam4 != 0)
		{
			func_78(iParam0, iParam4);
		}
	}
	return 2;
}

void func_78(var uParam0, int iParam1)
{
	int iVar0;
	
	if (Global_35404 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_35404)
	{
		if (Global_35410[iVar0 /*4*/] == *uParam0)
		{
			Global_35410[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

int func_79(int iParam0)
{
	if (Global_35443 == 15)
	{
		return 0;
	}
	if (func_126(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_80()
{
	switch (iLocal_121)
	{
		case 4:
		case 5:
		case 6:
		case 8:
		case 12:
			func_81();
			break;
		
		default:
			break;
	}
}

void func_81()
{
	var uVar0;
	struct<3> Var1;
	
	uVar0 = unk_0x2ADE2CEED2637E95();
	if (unk_0x86CCCD2FAE9D5E65(uVar0))
	{
		Local_122.f_1 = iVar0;
	}
	if (unk_0x86CCCD2FAE9D5E65(iLocal_296))
	{
		Var1 = { unk_0xB6AE0DAE06D56288(iLocal_296, 1) };
		if (unk_0xB7A628320EFF8E47(Var1, Local_89) > 25f)
		{
			func_82(0);
		}
	}
}

void func_82(int iParam0)
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

int func_83(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_84(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!unk_0x7DF7DE8C76D7F346(unk_0xEC537F0C0E8265EE()))
	{
		return 0;
	}
	if (func_89(0))
	{
		return 0;
	}
	if (unk_0x521385D8214D27C4())
	{
		return 0;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_36143[iVar0 /*19*/] == 1 && Global_36143[iVar0 /*19*/].f_4 == 1)
		{
			if (bParam1)
			{
				if (Global_36143[iVar0 /*19*/].f_17)
				{
					return 0;
				}
			}
			Global_36143[iVar0 /*19*/].f_5 = 1;
			Global_36143[iVar0 /*19*/].f_17 = 1;
			return 1;
		}
		else
		{
			if (Global_36143[iVar0 /*19*/] == 0)
			{
			}
			if (Global_36143[iVar0 /*19*/].f_7)
			{
			}
		}
	}
	return 0;
}

int func_84(int iParam0)
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
		if (Global_36143[iVar0 /*19*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_85(int iParam0)
{
	int iVar0;
	
	if (*iParam0 == -1)
	{
		return;
	}
	iVar0 = func_84(*iParam0);
	if (iVar0 == -1)
	{
		*iParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_36143[iVar0 /*19*/])
		{
			Global_36143[iVar0 /*19*/].f_7 = 1;
			*iParam0 = -1;
			return;
		}
	}
	*iParam0 = -1;
}

void func_86(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5)
{
	int iVar0;
	
	if (unk_0x968BF1C2C695B61A(joaat("context_controller")) < 1)
	{
	}
	if (unk_0xF33755A765033580())
	{
		if (!*iParam0 == -1)
		{
			func_85(iParam0);
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
		if (!Global_36143[iVar0 /*19*/])
		{
			Global_36143[iVar0 /*19*/] = 1;
			Global_36143[iVar0 /*19*/].f_1 = Global_36266;
			Global_36266++;
			Global_36143[iVar0 /*19*/].f_4 = 0;
			Global_36143[iVar0 /*19*/].f_17 = 0;
			Global_36143[iVar0 /*19*/].f_5 = 0;
			Global_36143[iVar0 /*19*/].f_2 = iParam1;
			StringCopy(&(Global_36143[iVar0 /*19*/].f_8), sParam2, 16);
			Global_36143[iVar0 /*19*/].f_6 = iParam3;
			Global_36143[iVar0 /*19*/].f_18 = unk_0x8F56512BDA9F6921();
			Global_36143[iVar0 /*19*/].f_7 = 0;
			Global_36143[iVar0 /*19*/].f_3 = iParam5;
			if (!unk_0xB318FDA0D1ABDB20(sParam4))
			{
				Global_36143[iVar0 /*19*/].f_12 = 1;
				StringCopy(&(Global_36143[iVar0 /*19*/].f_13), sParam4, 16);
			}
			else
			{
				Global_36143[iVar0 /*19*/].f_12 = 0;
			}
			*iParam0 = Global_36143[iVar0 /*19*/].f_1;
			return;
		}
		iVar0++;
	}
}

int func_87(var uParam0)
{
	return 1;
}

var func_88()
{
	return Global_67710;
}

int func_89(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14394.f_1 > 3)
		{
			if (unk_0x236D8AD7EE179F46(Global_2264, 14))
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
	if (unk_0x968BF1C2C695B61A(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14394.f_1 > 3)
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
				return Global_1334766.f_203[iParam1];
			}
			break;
	}
	return unk_0x236D8AD7EE179F46(Global_1334766.f_949, iParam0);
}

bool func_91()
{
	return unk_0x48E480685981C7D4() <= Global_17238.f_5630 + 100;
}

int func_92()
{
	if (unk_0x968BF1C2C695B61A(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

bool func_93(bool bParam0)
{
	if (bParam0)
	{
		return (Global_17099.f_4 && Global_17099.f_104 == 4);
	}
	return Global_17099.f_4;
}

void func_94(var uParam0, int iParam1)
{
	func_95(uParam0, iParam1);
}

void func_95(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

int func_96()
{
	return 1;
}

bool func_97()
{
	int iVar0;
	bool bVar1;
	
	if (unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
	{
		return 0;
	}
	unk_0x5F446E70DA9B8122(unk_0x81873881071CD9FE(), &iVar0, 1);
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
	if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
	{
		return ((((bVar1 && unk_0xCAD9951C953F5B2D(0, 69)) || (bVar1 && unk_0xCAD9951C953F5B2D(0, 70))) || (bVar1 && unk_0xCAD9951C953F5B2D(0, 68))) || unk_0x4E8E6ABD17B372AE(unk_0x1329891157A54C63()));
	}
	return (((((bVar1 && unk_0xCAD9951C953F5B2D(0, 24)) || (bVar1 && unk_0xCAD9951C953F5B2D(0, 25))) || (bVar1 && unk_0xCAD9951C953F5B2D(0, 47))) || unk_0x10FCC67BACF3EC7A(unk_0x81873881071CD9FE())) || unk_0x4E8E6ABD17B372AE(unk_0x1329891157A54C63()));
}

int func_98(int iParam0)
{
	int iVar0;
	
	if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()))
	{
		if (unk_0x86CCCD2FAE9D5E65(unk_0x81873881071CD9FE()))
		{
			if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
			{
				iVar0 = func_35();
				if (!func_37(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0x817D7181C9C0AC5F(unk_0x1329891157A54C63()) || unk_0x0752B24E8A13FF0E(unk_0x81873881071CD9FE())) || unk_0x463E18F5BBDEA9C4(unk_0x81873881071CD9FE())) || unk_0xD81BC0FD4D47CC04(unk_0x81873881071CD9FE())) || unk_0x98AED52C4D8603AF(unk_0x81873881071CD9FE())) || unk_0x375975027050A891(unk_0x1329891157A54C63(), 1)) || unk_0x1E73DDF10071C453(unk_0x1329891157A54C63())) || unk_0xFB9BF178E208C231(unk_0x81873881071CD9FE(), 0)) || func_105()) || Global_97978) || Global_24948) || func_104()) || func_90(8, -1)) || func_103()) || func_102()) || func_101()) || func_92()) || Global_98931.f_6302.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0x375975027050A891(unk_0x1329891157A54C63(), 1) || func_105()) || Global_24948) || func_104()) || func_90(8, -1)) || func_101()) || func_103()) || func_102()) || func_92()) || Global_98931.f_6302.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x817D7181C9C0AC5F(unk_0x1329891157A54C63()) || unk_0x0752B24E8A13FF0E(unk_0x81873881071CD9FE())) || unk_0x463E18F5BBDEA9C4(unk_0x81873881071CD9FE())) || unk_0xD81BC0FD4D47CC04(unk_0x81873881071CD9FE())) || unk_0x98AED52C4D8603AF(unk_0x81873881071CD9FE())) || unk_0x375975027050A891(unk_0x1329891157A54C63(), 1)) || unk_0x1E73DDF10071C453(unk_0x1329891157A54C63())) || unk_0xFB9BF178E208C231(unk_0x81873881071CD9FE(), 0)) || func_105()) || Global_97978) || Global_24948) || func_104()) || func_90(8, -1)) || func_101()) || func_103()) || func_102()) || func_92()) || Global_98931.f_6302.f_919[iVar0] == 5) || Global_35990 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0xD81BC0FD4D47CC04(unk_0x81873881071CD9FE()) || unk_0x98AED52C4D8603AF(unk_0x81873881071CD9FE())) || unk_0x375975027050A891(unk_0x1329891157A54C63(), 1)) || unk_0xFB9BF178E208C231(unk_0x81873881071CD9FE(), 0)) || func_105()) || Global_97978) || Global_24948) || func_104()) || func_90(8, -1)) || func_103()) || func_102()) || func_92()) || Global_98931.f_6302.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_105() || unk_0xF730A9A61F7B0EC2(unk_0x1329891157A54C63()) > 0) || func_90(8, -1)) || func_92()) || func_100()) || Global_98931.f_6302.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_90(8, -1) || func_103()) || func_102()) || func_100()) || func_99())
						{
							return 0;
						}
						if ((unk_0xF33755A765033580() && unk_0xCC3731E2C2E07187() != 3) && unk_0x74F26547462074EE() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (unk_0x86CCCD2FAE9D5E65(unk_0x81873881071CD9FE()))
						{
							if ((((((((((((((unk_0xFB9BF178E208C231(unk_0x81873881071CD9FE(), 0) || unk_0xF730A9A61F7B0EC2(unk_0x1329891157A54C63()) > 0) || unk_0x0752B24E8A13FF0E(unk_0x81873881071CD9FE())) || unk_0xD81BC0FD4D47CC04(unk_0x81873881071CD9FE())) || unk_0x98AED52C4D8603AF(unk_0x81873881071CD9FE())) || unk_0x375975027050A891(unk_0x1329891157A54C63(), 1)) || unk_0x1E73DDF10071C453(unk_0x1329891157A54C63())) || func_105()) || Global_24948) || func_104()) || func_90(8, -1)) || func_102()) || func_101()) || func_92()) || Global_98931.f_6302.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0xFB9BF178E208C231(unk_0x81873881071CD9FE(), 0) || !unk_0xF26CA0663D2E037E(unk_0x1329891157A54C63())) || !unk_0x817D7181C9C0AC5F(unk_0x1329891157A54C63())) || !unk_0xECDEA377354CBDA4()) || unk_0x0752B24E8A13FF0E(unk_0x81873881071CD9FE())) || unk_0xD81BC0FD4D47CC04(unk_0x81873881071CD9FE())) || unk_0x98AED52C4D8603AF(unk_0x81873881071CD9FE())) || unk_0x375975027050A891(unk_0x1329891157A54C63(), 1)) || func_105()) || func_102()) || Global_97978) || Global_24948) || func_104()) || Global_36493) || func_90(8, -1)) || func_101()) || func_100()) || func_92()) || Global_98931.f_6302.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0xFB9BF178E208C231(unk_0x81873881071CD9FE(), 0) || !unk_0xF26CA0663D2E037E(unk_0x1329891157A54C63())) || !unk_0x817D7181C9C0AC5F(unk_0x1329891157A54C63())) || !unk_0xECDEA377354CBDA4()) || unk_0x9C85ECF581158409(unk_0x1329891157A54C63(), 0)) || unk_0x0752B24E8A13FF0E(unk_0x81873881071CD9FE())) || unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 1)) || unk_0xD81BC0FD4D47CC04(unk_0x81873881071CD9FE())) || unk_0x98AED52C4D8603AF(unk_0x81873881071CD9FE())) || unk_0xD496D3841112DF95(unk_0x81873881071CD9FE())) || unk_0x375975027050A891(unk_0x1329891157A54C63(), 1)) || unk_0x1E73DDF10071C453(unk_0x1329891157A54C63())) || func_105()) || Global_97978) || Global_24948) || func_104()) || func_90(8, -1)) || func_101()) || func_100()) || func_103()) || func_102()) || func_92())
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
	return Global_90848.f_1;
}

int func_100()
{
	if (Global_88064 != -1)
	{
		return unk_0x236D8AD7EE179F46(Global_81930[Global_88064 /*34*/].f_15, 13);
	}
	return 0;
}

int func_101()
{
	if (Global_69280)
	{
		return 1;
	}
	else if (Global_55396 && !Global_55402)
	{
		return 1;
	}
	return 0;
}

bool func_102()
{
	return Global_90861.f_297 > 0;
}

bool func_103()
{
	return Global_90861.f_296 > 0;
}

var func_104()
{
	return Global_1315892;
}

int func_105()
{
	if (!unk_0x1C6DF6AD69BE853E())
	{
		return Global_88620.f_44 == 1;
	}
	return 0;
}

int func_106()
{
	if (unk_0x968BF1C2C695B61A(joaat("stripperhome")) > 0)
	{
		return 1;
	}
	return 0;
}

var func_107()
{
	return Global_86974;
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
			if (func_126(5))
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
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return 0;
	}
	return unk_0xFBACB273AA628CC5(Global_25250[iVar0 /*23*/].f_19);
}

bool func_110(int iParam0)
{
	return Global_35443 == iParam0;
}

void func_111(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_112()
{
	struct<3> Var0;
	
	if (bLocal_295)
	{
		switch (iLocal_121)
		{
			case 4:
			case 5:
			case 8:
				iLocal_296 = unk_0x530605DB2F32365F(joaat("p_parachute_s"), func_47(iLocal_121), 1, 1, 0);
				unk_0x3A45EB0810EBE71C(iLocal_296, func_46(iLocal_121), 2, 1);
				unk_0xA8F22633ACC22189(iLocal_296, 1);
				break;
			
			case 6:
			case 12:
				iLocal_296 = unk_0x530605DB2F32365F(joaat("p_parachute_s"), func_47(iLocal_121), 1, 1, 0);
				unk_0x3A45EB0810EBE71C(iLocal_296, func_46(iLocal_121), 2, 1);
				unk_0xB33EF209EE913BBA(iLocal_296);
				Var0 = { func_114(iLocal_121) };
				if (!func_33(Var0))
				{
					uLocal_297 = unk_0xE00F8DEA9778FC87(joaat("bati"), Var0, func_113(iLocal_121), 1, 1);
					uLocal_297 = uLocal_297;
				}
				break;
			
			default:
				break;
			}
	}
}

float func_113(int iParam0)
{
	switch (iParam0)
	{
		case 6:
			return 165.0425f;
		
		default:
	}
	return 0f;
}

Vector3 func_114(int iParam0)
{
	switch (iParam0)
	{
		case 6:
			return -1243.606f, 4543.016f, 185.9527f;
		
		default:
	}
	return 0f, 0f, 0f;
}

bool func_115()
{
	switch (iLocal_121)
	{
		case 5:
		case 4:
		case 8:
		case 6:
			return (((unk_0x8E8B546E1A81D27F("pickup_object") && unk_0x8E8B546E1A81D27F("oddjobs@basejump@ig_15")) && func_116(&uLocal_117)) && func_116(&uLocal_119));
			break;
		
		case 12:
			return ((unk_0x8E8B546E1A81D27F("pickup_object") && unk_0x8E8B546E1A81D27F("oddjobs@basejump@ig_15")) && func_116(&uLocal_117));
			break;
		
		default:
			break;
	}
	return (func_116(&uLocal_117) && func_116(&uLocal_119));
}

int func_116(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			if (!unk_0x33ACB874CECA2D4B((*uParam0)[iVar0]))
			{
				if (!unk_0x33ACB874CECA2D4B((*uParam0)[iVar0]))
				{
				}
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_117()
{
	switch (iLocal_121)
	{
		case 5:
		case 8:
			func_119(&uLocal_117, joaat("p_parachute_s"));
			unk_0x295DC04FC13E025B("pickup_object");
			unk_0x295DC04FC13E025B("oddjobs@basejump@ig_15");
			break;
		
		case 4:
		case 6:
			func_119(&uLocal_117, joaat("p_parachute_s"));
			func_119(&uLocal_119, joaat("bati"));
			unk_0x295DC04FC13E025B("pickup_object");
			unk_0x295DC04FC13E025B("oddjobs@basejump@ig_15");
			break;
		
		case 12:
			func_119(&uLocal_117, joaat("p_parachute_s"));
			unk_0x295DC04FC13E025B("pickup_object");
			unk_0x295DC04FC13E025B("oddjobs@basejump@ig_15");
			break;
		
		default:
			break;
	}
	func_118(&uLocal_117);
	func_118(&uLocal_119);
}

void func_118(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			unk_0x32A12757CBF48A33((*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

int func_119(var uParam0, int iParam1)
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
	iVar1 = func_120(uParam0);
	if (iVar1 < 0 || iVar1 >= *uParam0)
	{
		return 0;
	}
	(*uParam0)[iVar1] = iParam1;
	return 1;
}

int func_120(var uParam0)
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

void func_121(int iParam0)
{
	iLocal_94 = iParam0;
}

void func_122(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (!bParam2)
	{
		iVar1 = unk_0x236D8AD7EE179F46(Global_25250[iVar0 /*23*/].f_11, 15);
		if (iVar1 == bParam1)
		{
			return;
		}
	}
	if (bParam1 != unk_0x236D8AD7EE179F46(Global_25250[iVar0 /*23*/].f_11, 0))
	{
		unk_0xF3148AAF69AF9CBC(&(Global_25250[iVar0 /*23*/].f_11), 18);
		if (Global_25247 == 1)
		{
			Global_25248 = 1;
		}
		Global_25247 = 1;
	}
	if (bParam1)
	{
		unk_0xF3148AAF69AF9CBC(&(Global_25250[iVar0 /*23*/].f_11), 0);
		unk_0xF3148AAF69AF9CBC(&(Global_25250[iVar0 /*23*/].f_11), 15);
		unk_0xF3148AAF69AF9CBC(&(Global_25250[iVar0 /*23*/].f_11), 3);
	}
	else
	{
		unk_0xC69E84EBBD7166E6(&(Global_25250[iVar0 /*23*/].f_11), 0);
		unk_0xC69E84EBBD7166E6(&(Global_25250[iVar0 /*23*/].f_11), 15);
	}
	if (!unk_0x236D8AD7EE179F46(Global_25250[iVar0 /*23*/].f_11, 0))
	{
		if (unk_0xFBACB273AA628CC5(Global_25250[iVar0 /*23*/].f_19))
		{
			unk_0x2A69072B23BDFD07(1);
			unk_0x0A8175F24237A3D4(&(Global_25250[iVar0 /*23*/].f_19));
			unk_0x2A69072B23BDFD07(0);
		}
	}
}

int func_123()
{
	if (unk_0x913B1C01C1BA6C6F())
	{
		if (unk_0x9C5272432A46019C() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_124()
{
	if (Global_88064 != -1)
	{
		return unk_0x236D8AD7EE179F46(Global_81930[Global_88064 /*34*/].f_15, 20);
	}
	return 0;
}

bool func_125(int iParam0, int iParam1)
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
	bVar0 = unk_0x236D8AD7EE179F46(Global_98931.f_7699.f_99.f_219[iParam0], iParam1);
	return bVar0;
}

bool func_126(int iParam0)
{
	return func_127(iParam0, Global_35443);
}

int func_127(int iParam0, int iParam1)
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

bool func_128(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_129()
{
	if (unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE()))
	{
		func_94(&uLocal_93, 8388608);
		return;
	}
	StringCopy(&Local_52, "bj", 64);
	iLocal_121 = func_133(Local_89, 0);
	switch (iLocal_121)
	{
		case 4:
			iLocal_104 = 129;
			break;
		
		case 5:
			iLocal_104 = 130;
			break;
		
		case 6:
			iLocal_104 = 131;
			break;
		
		case 8:
			iLocal_104 = 133;
			break;
		
		case 12:
			iLocal_104 = 137;
			break;
		
		default:
			break;
	}
	if (iLocal_104 == 129)
	{
		if (func_132(19))
		{
			func_131(iLocal_104);
		}
	}
	func_94(&uLocal_93, 4194304);
	iLocal_98 = 0;
	fLocal_101 = (unk_0xBBDA792448DB5A89(func_130(iLocal_104)) + 5f);
	fLocal_116 = 1.1f;
	sLocal_100 = "PLAY_BASEJUMP_G";
	if (iLocal_104 != 263)
	{
		if (!func_125(0, iLocal_98))
		{
			bLocal_295 = false;
			func_131(iLocal_104);
		}
		else
		{
			bLocal_295 = true;
		}
	}
	else
	{
		bLocal_295 = false;
	}
	if (unk_0x968BF1C2C695B61A(joaat("bj")) > 0)
	{
		func_94(&uLocal_93, 8);
	}
	else
	{
		func_135(&uLocal_93, 8);
	}
	if (func_110(12))
	{
		func_94(&uLocal_93, 8);
	}
	iLocal_96 = 17000;
}

int func_130(int iParam0)
{
	switch (iParam0)
	{
		case 91:
		case 92:
		case 110:
		case 111:
			return 20;
			break;
		
		case 66:
		case 67:
		case 76:
		case 107:
		case 108:
		case 109:
		case 96:
		case 97:
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
		case 103:
		case 129:
		case 130:
		case 131:
		case 133:
		case 137:
			return 100;
			break;
		
		case 125:
		case 126:
		case 127:
		case 128:
		case 132:
		case 134:
		case 135:
		case 136:
		case 68:
		case 69:
		case 95:
		case 70:
		case 71:
		case 73:
		case 74:
		case 75:
		case 72:
			return 209;
			break;
	}
	return -1;
}

void func_131(int iParam0)
{
	if (iLocal_94 < 5)
	{
		if (iParam0 != 263)
		{
			if (iParam0 < 0 || iParam0 >= 263)
			{
			}
			func_122(iParam0, 0, 0);
		}
		iLocal_104 = 263;
		func_85(&iLocal_95);
		iLocal_94 = 9;
	}
}

bool func_132(int iParam0)
{
	return Global_98018[iParam0 /*10*/].f_1;
}

int func_133(struct<3> Param0, int iParam3)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 1E+09f;
	iVar3 = 0;
	while (iVar3 < 13)
	{
		if (iParam3 == func_134(iVar3))
		{
			fVar1 = unk_0xB7A628320EFF8E47(Param0, func_45(iVar3));
			if (fVar0 > fVar1)
			{
				fVar0 = fVar1;
				iVar2 = iVar3;
			}
		}
		iVar3++;
	}
	return iVar2;
}

int func_134(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 7:
		case 9:
		case 10:
		case 11:
			return 1;
			break;
	}
	return 0;
}

void func_135(var uParam0, int iParam1)
{
	func_136(uParam0, iParam1);
}

void func_136(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

void func_137(bool bParam0)
{
	if (bParam0)
	{
		if (iLocal_104 != 263)
		{
			func_122(iLocal_104, 0, 0);
		}
	}
	func_85(&iLocal_95);
	if (func_128(uLocal_93, 2))
	{
		func_5();
		func_135(&uLocal_93, 2);
		func_7(&iLocal_97);
	}
	iLocal_97 = -1;
	func_138();
	unk_0xC23A229F78DAD92A();
}

void func_138()
{
	func_135(&uLocal_93, 4);
	func_139();
	if (unk_0x64AD45A6264810A8(uLocal_51))
	{
		unk_0x1C80879C3BCB56E8(uLocal_51, 3);
	}
	if (!unk_0x4357449749A521B1(&Local_68))
	{
		if (unk_0xF36D646FEBEFB165(&Local_68) != 0)
		{
			unk_0xD25F9F5A80824C77(&Local_68);
		}
	}
}

void func_139()
{
}

