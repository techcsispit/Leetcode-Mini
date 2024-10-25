def missing_num(nums):
    for i in range(0,len(nums)):    
        if i not in nums:
            return i